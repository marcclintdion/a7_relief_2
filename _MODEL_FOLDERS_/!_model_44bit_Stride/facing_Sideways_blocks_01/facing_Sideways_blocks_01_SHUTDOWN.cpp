                    if(facing_Sideways_blocks_01_NORMALMAP != 0)                                                                                        
                    {                                                                                                              
                            glDeleteTextures(1, &facing_Sideways_blocks_01_NORMALMAP);                                                                  
                            facing_Sideways_blocks_01_NORMALMAP = 0;                                                                                    
                    }                                                                                                              
                    if(facing_Sideways_blocks_01_TEXTUREMAP  != 0)                                                                                      
                    {                                                                                                              
                            glDeleteTextures(1, &facing_Sideways_blocks_01_TEXTUREMAP);                                                                 
                            facing_Sideways_blocks_01_TEXTUREMAP  = 0;                                                                                  
                    }                                                                                                              
                    if(facing_Sideways_blocks_01_VBO  != 0)                                                                                             
                    {                                                                                                              
                            glDeleteBuffers(1, &facing_Sideways_blocks_01_VBO);                                                                         
                            facing_Sideways_blocks_01_VBO  = 0;                                                                                         
                    }                                                                                                              
                    if(facing_Sideways_blocks_01_INDICES_VBO  != 0)                                                                                             
                    {                                                                                                              
                            glDeleteBuffers(1, &facing_Sideways_blocks_01_INDICES_VBO);                                                                         
                            facing_Sideways_blocks_01_INDICES_VBO  = 0;                                                                                         
                    }                                                                                                              
