// 函数名称: sub_5c1f10
// 虚拟地址: 0x5c1f10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5c1f10(void* arg1, int32_t arg2, char arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    void* eax = arg1
    
    if (eax != 0)
        if (arg2 != 0)
            uint32_t (* var_8_1)(char* arg1, char* arg2) = sub_5a9697
            
            if ((arg3 & 1) == 0)
                var_8_1 = sub_5ac040
            
            int32_t result = 0
            int32_t edi = 0
            int32_t temp0 = *(eax + 0x34)
            
            if (temp0 u>= 0 && (temp0 u> 0 || *(eax + 0x30) u> 0))
                while (true)
                    void* esi_1 = sub_5c35a0(eax, result, edi, arg3.d, arg4)
                    
                    if (esi_1 != 0)
                        if ((arg3 & 2) != 0)
                            char* eax_3 = sub_5a8f10(esi_1, 0x2f)
                            
                            if (eax_3 != 0)
                                esi_1 = &eax_3[1]
                        
                        if (var_8_1(arg2, esi_1) == 0)
                            sub_5beff0(arg4)
                            return result
                    
                    int32_t result_1 = result
                    result += 1
                    edi = adc.d(edi, 0, result_1 u>= 0xffffffff)
                    int32_t temp2_1 = *(arg1 + 0x34)
                    
                    if (edi u>= temp2_1)
                        if (edi u> temp2_1)
                            break
                        
                        if (result u>= *(arg1 + 0x30))
                            break
                    
                    eax = arg1
            
            zip_error_set(arg4, 9, 0)
            return 0xffffffff
        
        zip_error_set(arg4, 0x12, 0)
    
    return 0xffffffff
}
