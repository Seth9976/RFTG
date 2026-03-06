// 函数名称: sub_5b902e
// 虚拟地址: 0x5b902e
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5b902e(int16_t* arg1, int32_t arg2, int16_t* arg3)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_c = edi
    int32_t result
    
    if (arg1 == 0)
        result = 0x16
        *__errno() = 0x16
    else
        int32_t i_1 = arg2
        
        if (i_1 != 0)
            int16_t* ecx_1 = arg3
            int16_t* edx_1
            
            if (ecx_1 != 0)
                edx_1 = arg1
                
                while (*edx_1 != 0)
                    edx_1 = &edx_1[1]
                    int32_t i_2 = i_1
                    i_1 -= 1
                    
                    if (i_2 == 1)
                        break
            
            if (ecx_1 == 0 || i_1 == 0)
                *arg1 = 0
                result = 0x16
                *__errno() = 0x16
            else
                void* edx_2 = edx_1 - ecx_1
                int32_t i
                
                do
                    int16_t eax_3 = *ecx_1
                    *(edx_2 + ecx_1) = eax_3
                    ecx_1 = &ecx_1[1]
                    
                    if (eax_3 == 0)
                        break
                    
                    i = i_1
                    i_1 -= 1
                while (i != 1)
                
                if (i_1 != 0)
                    return 0
                
                *arg1 = 0
                *__errno() = 0x22
                result = 0x22
        else
            result = 0x16
            *__errno() = 0x16
    
    __invalid_parameter_noinfo()
    return result
}
