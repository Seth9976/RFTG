// 函数名称: sub_5dea80
// 虚拟地址: 0x5dea80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5dea80(void* const arg1, void* arg2)
{
    // 第一条实际指令: void* const esi = arg1
    void* const esi = arg1
    int32_t edi = *(*(arg2 + 0x74) + 8)
    
    if (*(esi + 0x150) == 0)
        arg1 = nullptr
    else
        arg1 = sub_5ca850()
    
    int32_t result
    
    if (*(esi + 0x140) s>= 3 || *(esi + 0x14c) != 0 || *(esi + 0x148) != 0)
        int32_t result_1 = (*(*(esi + 0x278) + 0xc))(edi)
        
        if (result_1 == 0)
            sub_5cce60("Could not create GL context")
            return 0
        
        if (sub_5de920(esi, arg2, result_1) s< 0)
            sub_5dea20(esi, result_1)
            return 0
        
        int32_t eax_10 = (*(*(esi + 0x278) + 8))("wglCreateContextAttribsARB")
        
        if (eax_10 != 0)
            int32_t var_28 = *(esi + 0x140)
            int32_t var_20_1 = *(esi + 0x144)
            int32_t edx_5 = *(esi + 0x14c)
            int32_t var_1c_1
            __builtin_memset(&var_1c_1, 0, 0x14)
            int32_t var_2c = 0x2091
            int32_t var_24_1 = 0x2092
            int32_t ecx_4 = 4
            
            if (edx_5 != 0)
                int32_t var_1c_2 = 0x9126
                int32_t var_18_1 = edx_5
                ecx_4 = 6
            
            int32_t edx_6 = *(esi + 0x148)
            
            if (edx_6 != 0)
                (&var_2c)[ecx_4] = 0x2094
                (&var_28)[ecx_4] = edx_6
                ecx_4 += 2
            
            (&var_2c)[ecx_4] = 0
            result = eax_10(edi, arg1, &var_2c)
            (*(*(esi + 0x278) + 0x10))(result_1)
        else
            sub_5cce60("GL 3.x is not supported")
            result = result_1
    else
        result = (*(*(esi + 0x278) + 0xc))(edi)
        
        if (arg1 != 0)
            (*(*(esi + 0x278) + 0x18))(arg1, result)
    
    if (result == 0)
        sub_5dc5a0("Could not create GL context")
        return 0
    
    if (sub_5de920(esi, arg2, result) s>= 0)
        sub_5de4c0(esi, edi)
        return result
    
    sub_5dea20(esi, result)
    return 0
}
