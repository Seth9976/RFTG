// 函数名称: sub_5b04a4
// 虚拟地址: 0x5b04a4
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5b04a4(char* arg1, int32_t arg2, char* arg3)
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
            char* eax_3 = arg3
            
            if (eax_3 != 0)
                void* esi_1 = arg1 - eax_3
                int32_t i
                
                do
                    char ecx = *eax_3
                    *(esi_1 + eax_3) = ecx
                    eax_3 = &eax_3[1]
                    
                    if (ecx == 0)
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
                *arg1 = eax_3.b
                result = 0x16
                *__errno() = 0x16
        else
            result = 0x16
            *__errno() = 0x16
    
    __invalid_parameter_noinfo()
    return result
}
