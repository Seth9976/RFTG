// 函数名称: sub_65d520
// 虚拟地址: 0x65d520
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_65d520(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    void* ecx_1 = *(arg1 + 0x1c)
    int32_t* result = sub_5a881a(0x60)
    *result = sub_68b0a0(arg2, 8)
    result[1] = sub_68b0a0(arg2, 0x10)
    result[2] = sub_68b0a0(arg2, 0x10)
    result[3] = sub_68b0a0(arg2, 6)
    result[4] = sub_68b0a0(arg2, 8)
    int32_t eax_7 = sub_68b0a0(arg2, 4) + 1
    result[5] = eax_7
    
    if (*result s>= 1 && result[1] s>= 1 && result[2] s>= 1 && eax_7 s>= 1)
        arg1 = nullptr
        
        if (eax_7 s<= 0)
            return result
        
        void* ebx_1 = &result[6]
        
        while (true)
            int32_t eax_8 = sub_68b0a0(arg2, 8)
            *ebx_1 = eax_8
            
            if (eax_8 s< 0)
                break
            
            if (eax_8 s>= *(ecx_1 + 0x18))
                break
            
            int32_t* eax_9 = *(ecx_1 + (eax_8 << 2) + 0x720)
            
            if (eax_9[3] == 0)
                break
            
            if (*eax_9 s< 1)
                break
            
            void* eax_11 = arg1 + 1
            ebx_1 += 4
            arg1 = eax_11
            
            if (eax_11 s>= result[5])
                return result
    
    sub_5abfc0(result, 0, 0x60)
    __free_base(result)
    return 0
}
