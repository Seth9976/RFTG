// 函数名称: sub_5442d0
// 虚拟地址: 0x5442d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_5442d0(int32_t arg1)
{
    // 第一条实际指令: if (arg1 s>= 0x400)
    if (arg1 s>= 0x400)
        sub_4c5870("registerIndex < MAX_UNIFORMS", &data_83f3d3, "OpenGLGraphics.cpp", 0x379, 
            "GLDupCheck_glUniform3fv")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t esi_1 = arg1 * 2
    int32_t edi = 0xc
    int32_t* entry_result
    int32_t* result = entry_result
    int32_t* ecx_1 = data_307882c + (esi_1 << 3) + 0x28
    
    while (true)
        if (*ecx_1 == *result)
            edi -= 4
            result = &result[1]
            ecx_1 = &ecx_1[1]
            
            if (edi u>= 4)
                continue
            else
                if (edi == 0)
                    break
                
                int32_t edx_1
                edx_1.b = *result
                
                if (edx_1.b == *ecx_1)
                    if (edi u<= 1)
                        break
                    
                    edx_1.b = *(result + 1)
                    
                    if (edx_1.b == *(ecx_1 + 1))
                        if (edi u<= 2)
                            break
                        
                        result.b = *(result + 2)
                        
                        if (result.b == *(ecx_1 + 2))
                            break
        
        data_3079534(arg1, 1, entry_result)
        result = data_307882c
        result[esi_1 * 2 + 0xa] = *entry_result
        result[esi_1 * 2 + 0xb] = entry_result[1]
        result[esi_1 * 2 + 0xc] = entry_result[2]
        break
    
    return result
}
