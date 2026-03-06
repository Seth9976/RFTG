// 函数名称: sub_53d5f0
// 虚拟地址: 0x53d5f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

LRESULTsub_53d5f0()
{
    // 第一条实际指令: LRESULT result = data_3079208
    LRESULT result = data_3079208
    
    if (result != 0 && *(result + 4) == 0x19)
        result = sub_466320(result)
        int32_t* result_1 = result
        
        if (result != 0)
            result = SendMessageA(GetDlgItem(data_3078830, 0x76), 0x188, 0, 0)
            LRESULT result_2 = result
            
            if (result_2 != 0xffffffff)
                result = sub_537a90(result)
                
                if (result != 0xffffffff)
                    int32_t eax_3
                    char* ecx_1
                    eax_3, ecx_1 = sub_537960(result_2)
                    
                    if (eax_3 + 1 s> 0)
                        int32_t ecx_3 = result - result_2
                        int32_t var_c_1 = ecx_3
                        int32_t var_8_1 = eax_3 + 1
                        
                        while (true)
                            int32_t esi_2 = ecx_3 + result_2
                            int32_t var_2c_2 = ecx_3
                            int32_t* eax_6 = sub_4fff30(data_30d7434, 0)
                            sub_505390(eax_6, result_2, result_1, eax_6, esi_2)
                            ecx_1 = sub_53c0a0(result_2, esi_2)
                            result_2 += 1
                            int32_t temp0_1 = var_8_1
                            var_8_1 -= 1
                            
                            if (temp0_1 == 1)
                                break
                            
                            ecx_3 = var_c_1
                    
                    void* eax_8 = data_3079208
                    
                    if (eax_8 != 0)
                        int32_t eax_9 = *(eax_8 + 4)
                        
                        if (eax_9 == 0x19)
                            int32_t var_28_3 = 0xffffffff
                            ecx_1 = sub_538a80(result)
                        else if (eax_9 == 0x1b)
                            ecx_1 = sub_539d30(result)
                    
                    sub_536c00(ecx_1)
                    sub_56e600()
                    return sub_56e480()
    
    return result
}
