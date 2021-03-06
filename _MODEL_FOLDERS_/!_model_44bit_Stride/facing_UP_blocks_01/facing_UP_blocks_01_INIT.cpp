      //------------------------------------------------------------------------------------------                                              
      #ifdef __APPLE__                                                                                                                          
      filePathName = [[NSBundle mainBundle] pathForResource:@"facing_UP_blocks_01_DOT3" ofType:@"bmp"];                                                  
      image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);                                                   
      glGenTextures(1, &facing_UP_blocks_01_NORMALMAP);                                                                                                     
      glBindTexture(GL_TEXTURE_2D, facing_UP_blocks_01_NORMALMAP);                                                                                          
      ConfigureAndLoadTexture(image->data,  image->width, image->height );                                                                      
      imgDestroyImage(image);                                                                                                                   
      //---------------------                                                                                                                   
      filePathName = [[NSBundle mainBundle] pathForResource:@"facing_UP_blocks_01" ofType:@"png"];                                                       
      image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);                                                   
      glGenTextures(1, &facing_UP_blocks_01_TEXTUREMAP);                                                                                                       
      glBindTexture(GL_TEXTURE_2D, facing_UP_blocks_01_TEXTUREMAP);                                                                                            
      ConfigureAndLoadTexture(image->data,  image->width, image->height );                                                                      
      imgDestroyImage(image);                                                                                                                   
      #endif                                                                                                                                    
      //------------------------------------------------------------------------------------------                                              
      #ifdef WIN32                                                                                                                            
      loadTexture("_MODEL_FOLDERS_/facing_UP_blocks_01/facing_UP_blocks_01_DOT3.bmp",          facing_UP_blocks_01_NORMALMAP);                                                      
      loadTexture("_MODEL_FOLDERS_/facing_UP_blocks_01/facing_UP_blocks_01.png",               facing_UP_blocks_01_TEXTUREMAP);                                                        
      #endif                                                                                                                                    
      //------------------------------------------------------------------------------------------------------------//___LOAD_VBO               
      #include    "facing_UP_blocks_01.cpp"                                                                                                                
      glGenBuffers(1,              &facing_UP_blocks_01_VBO);                                                                                                
      glBindBuffer(GL_ARRAY_BUFFER, facing_UP_blocks_01_VBO);                                                                                                
      glBufferData(GL_ARRAY_BUFFER, sizeof(facing_UP_blocks_01), facing_UP_blocks_01, GL_STATIC_DRAW);                                                                    
      glBindBuffer(GL_ARRAY_BUFFER, 0);                                                                                                         
      //------------------------------------------------------------------------------------------------------------       
      #include    "facing_UP_blocks_01_INDICES.cpp"                                                                                                                
      glGenBuffers(1,              &facing_UP_blocks_01_INDICES_VBO);                                                                                                
      glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, facing_UP_blocks_01_INDICES_VBO);                                                                                                
      glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(facing_UP_blocks_01_INDICES), facing_UP_blocks_01_INDICES, GL_STATIC_DRAW);                                                                    
      glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);                                                                                                         
      //------------------------------------------------------------------------------------------------------------       
