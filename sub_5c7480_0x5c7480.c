// 函数名称: sub_5c7480
// 虚拟地址: 0x5c7480
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5c7480(void* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t eax = data_8b95d0
    int32_t eax = data_8b95d0
    
    if (eax == 0)
        if (arg3 != eax)
            sub_5cce60("The event system has been shut down")
        
        return 0xffffffff
    
    CRITICAL_SECTION* eax_2 = data_8b95cc
    void* result = nullptr
    void* result_1 = nullptr
    
    if (eax_2 != 0 && sub_5d1190(eax_2) != 0)
        sub_5cce60("Couldn't lock event queue")
        return 0xffffffff
    
    int32_t ebx
    int32_t var_50_2 = ebx
    
    if (arg3 != 0)
        void* esi_2 = arg1
        
        if (esi_2 == 0)
            arg3 = 1
            arg2 = 1
            void var_48
            esi_2 = &var_48
        
        int32_t* i_2 = data_8b95e4
        int32_t* i_4 = data_8b95e8
        
        if (i_2 != 0)
            int32_t* i
            
            do
                i = i_2[6]
                i_2[6] = i_4
                i_4 = i_2
                i_2 = i
            while (i != 0)
            data_8b95e8 = i_4
        
        int32_t* ebx_2 = data_8b95d8
        data_8b95e4 = 0
        
        if (ebx_2 != 0)
            void* var_8_1 = esi_2
            
            while (result s< arg2)
                int32_t eax_5 = *ebx_2
                int32_t* ecx_1 = ebx_2[0x15]
                
                if (arg4 u<= eax_5 && eax_5 u<= arg5)
                    __builtin_memcpy(var_8_1, ebx_2, 0x38)
                    
                    if (*ebx_2 == 0x201)
                        int32_t* i_5
                        
                        if (i_4 == 0)
                            int32_t var_58_2 = 0x1c
                            i_5 = sub_5d0ac0()
                            i_4 = data_8b95e8
                        else
                            i_5 = i_4
                            i_4 = i_4[6]
                            data_8b95e8 = i_4
                        
                        int32_t* ecx_2 = ebx_2[2]
                        *i_5 = *ecx_2
                        i_5[1] = ecx_2[1]
                        i_5[2] = ecx_2[2]
                        i_5[3] = ecx_2[3]
                        i_5[4] = ecx_2[4]
                        i_5[5] = ecx_2[5]
                        i_5[6] = data_8b95e4
                        data_8b95e4 = i_5
                        *(var_8_1 + 8) = i_5
                    
                    result_1 += 1
                    var_8_1 += 0x38
                    
                    if (arg3 == 2)
                        sub_5c7420(ebx_2)
                        i_4 = data_8b95e8
                    
                    result = result_1
                
                ebx_2 = ecx_1
                
                if (ebx_2 == 0)
                    break
    else
        int32_t i_3 = arg2
        
        if (i_3 s> 0)
            int32_t* esi_1 = arg1
            int32_t i_1
            
            do
                result += sub_5c7340(esi_1)
                esi_1 = &esi_1[0xe]
                i_1 = i_3
                i_3 -= 1
            while (i_1 != 1)
    
    sub_5d11c0(data_8b95cc)
    return result
}
