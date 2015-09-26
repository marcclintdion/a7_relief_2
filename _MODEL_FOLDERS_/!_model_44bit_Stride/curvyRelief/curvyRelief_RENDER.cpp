    glBindBuffer(GL_ARRAY_BUFFER, curvyRelief_VBO);                                                                                                                                
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, curvyRelief_INDICES_VBO);                                                                                                                                
    //---------------------------------------------------------------------------------------------------------------------------------------------------|__MODEL             
    LoadIdentity(modelView);                                                                                                                                                  
    Translate(modelView, curvyRelief_POSITION[0], curvyRelief_POSITION[1], curvyRelief_POSITION[2]);                                                                                         
    Rotate(modelView, curvyRelief_ROTATE[0], curvyRelief_ROTATE[1], curvyRelief_ROTATE[2], curvyRelief_ROTATE[3]); 

//======================================================================================================                                                       
    //SelectShader(shaderNumber);                                                                                                                              
//======================================================================================================                                                       

    glActiveTexture ( GL_TEXTURE1 );                                                                                                                                          
    glBindTexture(GL_TEXTURE_2D, curvyRelief_NORMALMAP);                                                                                                                          
    //---                                                                                                                                                                     
    glActiveTexture (GL_TEXTURE0);                                                                                                                                            
    glBindTexture(GL_TEXTURE_2D, curvyRelief_TEXTUREMAP);                                                                                                                            
    //---------------------------------------------------------------------------------------------------------------------------------------------------|__DRAW              
    glDrawElements(GL_TRIANGLES, 384, GL_UNSIGNED_INT, 0);                                                                                                     

