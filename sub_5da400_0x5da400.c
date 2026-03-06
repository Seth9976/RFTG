// 函数名称: sub_5da400
// 虚拟地址: 0x5da400
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_5da400(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t* result = nullptr
    int32_t* result = nullptr
    int32_t* edi = arg1
    
    if (edi == 0)
        sub_5cce60("Invalid window")
        return 0
    
    if (sub_5d8ec0(edi) != 0)
        sub_5cce60("Renderer already associated with window")
        return 0
    
    char* eax_3 = sub_5cec90("SDL_RENDER_VSYNC")
    int32_t ebx = arg3
    
    if (eax_3 != 0)
        if (*eax_3 != 0x30)
            ebx |= 4
        else
            ebx &= 0xfffffffb
    
    if (arg2 s>= 0)
        if (arg2 s>= 3)
            int32_t var_20_4 = 2
            sub_5cce60("index must be -1 or in the range of 0 - %d")
            return 0
        
        result = (*(&data_8bac8c)[arg2])(edi, ebx)
    else
        int32_t eax_5 = sub_5cec90("SDL_RENDER_DRIVER")
        int32_t var_c_1 = eax_5
        int32_t i
        
        if (eax_5 == 0)
        label_5da4db:
            
            for (i = 0; i s< 3; i += 1)
                int32_t* eax_9 = (&data_8bac8c)[i]
                
                if ((eax_9[2] & ebx) == ebx)
                    result = (*eax_9)(arg1, ebx)
                    
                    if (result != 0)
                        break
        else
            i = 0
            int32_t* ecx_1
            
            while (true)
                ecx_1 = (&data_8bac8c)[i]
                int32_t var_20_1 = ecx_1[1]
                int32_t var_24_1 = eax_5
                
                if (sub_5cd5e0() == 0)
                    break
                
                i += 1
                
                if (i s>= 3)
                    goto label_5da4db
                
                eax_5 = var_c_1
            
            result = (*ecx_1)(arg1, ebx)
            
            if (result == 0)
                goto label_5da4db
        
        if (i == 3)
            sub_5cce60("Couldn't find matching render driver")
            return 0
        
        edi = arg1
    
    if (result != 0)
        long double x87_r7_1 = float.t(1)
        result[0x45] = fconvert.s(x87_r7_1)
        *result = 0xbf7fc4
        result[0x46] = fconvert.s(x87_r7_1)
        result[0x2f] = edi
        int32_t edx_5
        edx_5.b = (sub_5c9760(edi) & 0x48) != 0
        result[0x30] = edx_5
        sub_5c98a0(edi, "_SDL_WindowRenderData", result)
        sub_5d9f50(result, nullptr)
        sub_5c7720(sub_5da190, result)
        int32_t var_40_1 = result[0x1a]
        sub_5ce920(6, "Created renderer: %s")
    
    return result
}
