    glUseProgram(cube_relief_SHADER);   
    glBindBuffer(GL_ARRAY_BUFFER, curvyRelief_VBO);                                                                                                                                
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, curvyRelief_INDICES_VBO);                                                                                                                                
    //---------------------------------------------------------------------------------------------------------------------------------------------------|__MODEL             
    LoadIdentity(modelView);
    LoadIdentity(rotationMatrix);                                                                                                                                                      
    Translate(modelView, moveSet[0], moveSet[1], moveSet[2]);                                                                                                                                                    
    Translate(modelView, curvyRelief_POSITION[0], curvyRelief_POSITION[1], curvyRelief_POSITION[2]);                                                                                         
    Rotate(modelView, curvyRelief_ROTATE[0], curvyRelief_ROTATE[1], curvyRelief_ROTATE[2], curvyRelief_ROTATE[3]++); 

    Rotate(modelView, 1.0, 0.0, 0.0, rotateModelWithLeftMouse[0]);
    Rotate(modelView, 0.0, 1.0, 0.0, rotateModelWithLeftMouse[1]);     
    MultiplyMatrix(mvpMatrix, projection, modelView);                                                                                                                         
    //---------------------------------------------------------------------------------------------------------------------------------------------------|__LIGHT             
    LoadIdentity(lightMatrix);    
   // LoadIdentity(lightProjection);                                                                                                                                                
   // PerspectiveMatrix(lightProjection, 10,viewWidth / viewHeight, 0.1, 10000);
      
   // MultiplyMatrix(lightMatrix, lightProjection, modelView);  

mtxTranspose(lightMatrix, modelView);    
    
    //Rotate(lightMatrix,0.0, 1.0, 0.0,  look_LEFT_RIGHT);                                                                                                                         
    //Rotate(lightMatrix,1.0, 0.0, 0.0,  -look_UP_DOWN);                                                                                                                      
    //======================================================================================================                                                                  
    glVertexAttribPointer(0,   3, GL_FLOAT, GL_FALSE, 44, BUFFER_OFFSET(0));                                                                                                  
    glEnableVertexAttribArray(0);	                                                                                                                                          
    glVertexAttribPointer(1,   3, GL_FLOAT, GL_FALSE, 44, BUFFER_OFFSET(12));                                                                                                 
    glEnableVertexAttribArray(1);  
    glVertexAttribPointer(2,   3, GL_FLOAT, GL_FALSE, 44, BUFFER_OFFSET(24));                                                                                                 
    glEnableVertexAttribArray(2);     
    glVertexAttribPointer(3,   2, GL_FLOAT, GL_FALSE, 44, BUFFER_OFFSET(36));                                                                                                 
    glEnableVertexAttribArray(3);                                                                                                                                                
    //---------------------------------------------------------------------------------------------------------------------------------------------------|__UNIFORMS          
    
    //---------------------------------------------------------------------------------    
    glUniform4f(UNIFORM_LIGHT_POSITION_01_cube_relief, cube_relief_LIGHT_POSITION_01[0], 
                                                       cube_relief_LIGHT_POSITION_01[1], 
                                                       cube_relief_LIGHT_POSITION_01[2], 
                                                       cube_relief_LIGHT_POSITION_01[3]); 
    //--------------------------------------------  
    glUniform4f(UNIFORM_LIGHT_POSITION_02_cube_relief, cube_relief_LIGHT_POSITION_02[0], 
                                                       cube_relief_LIGHT_POSITION_02[1], 
                                                       cube_relief_LIGHT_POSITION_02[2], 
                                                       cube_relief_LIGHT_POSITION_02[3]);                                                   
  
    //--------------------------------------------  
    glUniform4f(UNIFORM_LIGHT_POSITION_03_cube_relief, cube_relief_LIGHT_POSITION_03[0], 
                                                       cube_relief_LIGHT_POSITION_03[1], 
                                                       cube_relief_LIGHT_POSITION_03[2], 
                                                       cube_relief_LIGHT_POSITION_03[3]);                                                   
  
  
  
   
    glUniform4f(UNIFORM_linearTransform_cube_relief , cube_relief_POSITION[0], cube_relief_POSITION[1], cube_relief_POSITION[2], cube_relief_POSITION[3]);        
    
    glUniform1f(UNIFORM_SHININESS_cube_relief, cube_relief_SHININESS);                                                                                                                  
    glUniform1f(UNIFORM_ATTENUATION_cube_relief, cube_relief_ATTENUATION);                                                                                                                  
    glUniformMatrix4fv(UNIFORM_MODELVIEWPROJ_cube_relief,   1,0,  mvpMatrix); 
    glUniformMatrix4fv(UNIFORM_MODELVIEW_cube_relief,   1,0,      modelView); 
    glUniformMatrix4fv(UNIFORM_ROTATIONMATRIX_cube_relief,   1,0,      rotationMatrix);                                                                                                             
    glUniformMatrix4fv(UNIFORM_LIGHT_MATRIX_cube_relief,    1,0,  lightMatrix);                                                                                                    
    glUniform1i (UNIFORM_TEXTURE_HEIGHT_cube_relief, 2);     
    glUniform1i (UNIFORM_TEXTURE_DOT3_cube_relief, 1);                                                                                                                             
    glUniform1i (UNIFORM_TEXTURE_cube_relief, 0 );                                                                                                                                 
    //======================================================================================================                                                                  
    glActiveTexture ( GL_TEXTURE2 );                                                                                                                                          
    glBindTexture(GL_TEXTURE_2D, curvyRelief_HEIGHTMAP);                                                                                                                          
    //---    
    glActiveTexture ( GL_TEXTURE1 );                                                                                                                                          
    glBindTexture(GL_TEXTURE_2D, curvyRelief_NORMALMAP);                                                                                                                          
    //---                                                                                                                                                                     
    glActiveTexture (GL_TEXTURE0);                                                                                                                                            
    glBindTexture(GL_TEXTURE_2D, curvyRelief_TEXTUREMAP);                                                                                                                            
    //---------------------------------------------------------------------------------------------------------------------------------------------------|__DRAW              
    glDrawElements(GL_TRIANGLES, 384, GL_UNSIGNED_INT, 0);                                                                                                     

