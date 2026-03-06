// 函数名称: sub_6452e0
// 虚拟地址: 0x6452e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_6452e0()
{
    // 第一条实际指令: int32_t __saved_ebx = 0x6c
    int32_t __saved_ebx = 0x6c
    int32_t var_c = 1
    int32_t eax
    int32_t ecx
    int32_t edx
    eax, ecx, edx = sub_5d0ad0()
    
    if (eax != 0)
        int32_t eax_1
        int32_t ecx_1
        int32_t edx_1
        void* esi_1
        eax_1, ecx_1, edx_1, esi_1 = sub_5ca380(eax, edx, ecx, "GL_ARB_texture_rectangle")
        
        if (eax_1 != 0)
            *(esi_1 + 0x38) = 1
        else
            eax_1, ecx_1, edx_1, esi_1 = sub_5ca380(eax_1, edx_1, ecx_1, "GL_EXT_texture_rectangle")
            
            if (eax_1 != 0)
                *(esi_1 + 0x38) = 1
        
        int32_t eax_2
        int32_t ecx_2
        int32_t edx_2
        int32_t* result
        eax_2, ecx_2, edx_2, result = sub_5ca380(eax_1, edx_1, ecx_1, "GL_ARB_shader_objects")
        
        if (eax_2 != 0)
            int32_t eax_3
            int32_t ecx_3
            int32_t edx_3
            eax_3, ecx_3, edx_3, result = sub_5ca380(eax_2, edx_2, ecx_2, "GL_ARB_shading_language_100")
            
            if (eax_3 != 0)
                int32_t eax_4
                int32_t ecx_4
                int32_t edx_4
                eax_4, ecx_4, edx_4, result = sub_5ca380(eax_3, edx_3, ecx_3, "GL_ARB_vertex_shader")
                
                if (eax_4 != 0)
                    int32_t eax_5
                    int32_t edi_1
                    eax_5, result, edi_1 = sub_5ca380(eax_4, edx_4, ecx_4, "GL_ARB_fragment_shader")
                    
                    if (eax_5 != 0)
                        *result = sub_5ca2e0("glGetError")
                        result[1] = sub_5ca2e0("glAttachObjectARB")
                        result[2] = sub_5ca2e0("glCompileShaderARB")
                        result[3] = sub_5ca2e0("glCreateProgramObjectARB")
                        result[4] = sub_5ca2e0("glCreateShaderObjectARB")
                        result[5] = sub_5ca2e0("glDeleteObjectARB")
                        result[6] = sub_5ca2e0("glGetInfoLogARB")
                        result[7] = sub_5ca2e0("glGetObjectParameterivARB")
                        result[8] = sub_5ca2e0("glGetUniformLocationARB")
                        result[9] = sub_5ca2e0("glLinkProgramARB")
                        result[0xa] = sub_5ca2e0("glShaderSourceARB")
                        result[0xb] = sub_5ca2e0("glUniform1iARB")
                        result[0xc] = sub_5ca2e0("glUniform1fARB")
                        int32_t eax_19
                        int32_t edx_5
                        eax_19, edx_5 = sub_5ca2e0("glUseProgramObjectARB")
                        bool cond:0_1 = *result == 0
                        result[0xd] = eax_19
                        
                        if (not(cond:0_1) && result[1] != 0 && result[2] != 0 && result[3] != 0
                                && result[4] != 0 && result[5] != 0 && result[6] != 0 && result[7] != 0
                                && result[8] != 0 && result[9] != 0 && result[0xa] != 0
                                && result[0xb] != 0 && result[0xc] != 0 && eax_19 != 0)
                            int32_t var_c_1 = edi_1
                            int32_t i = 0
                            void* ebx = &result[0xf]
                            
                            do
                                int32_t i_1 = i
                                int32_t eax_22
                                eax_22, edx_5 = sub_645160(result, edx_5)
                                
                                if (eax_22 == 0)
                                    sub_6452b0(result)
                                    return 0
                                
                                i += 1
                                ebx += 0xc
                            while (i s< 4)
                            
                            return result
        
        int32_t* __saved_ebx_1 = result
        sub_5d0af0()
    
    return 0
}
