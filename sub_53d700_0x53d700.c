// 函数名称: sub_53d700
// 虚拟地址: 0x53d700
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

LRESULTsub_53d700()
{
    // 第一条实际指令: LRESULT result = data_3079208
    LRESULT result = data_3079208
    
    if (result != 0 && *(result + 4) == 0x19)
        result = sub_466320(result)
        LRESULT result_1 = result
        
        if (result != 0)
            result = SendMessageA(GetDlgItem(data_3078830, 0x76), 0x188, 0, 0)
            LRESULT result_2 = result
            
            if (result_2 != 0xffffffff)
                result = sub_537b50(result)
                
                if (result != 0xffffffff)
                    int32_t esi_1 = result + sub_537960(result)
                    int32_t eax_4
                    int32_t ecx_1
                    eax_4, ecx_1 = sub_537960(result_2)
                    int32_t i_2 = eax_4 + 1
                    
                    if (i_2 s> 0)
                        int32_t i_1 = i_2
                        int32_t i
                        
                        do
                            int32_t var_24_2 = ecx_1
                            int32_t* eax_6 = sub_4fff30(data_30d7434, 0)
                            sub_505390(eax_6, result_2, result_1, eax_6, esi_1)
                            ecx_1 = sub_53c0a0(result_2, esi_1)
                            i = i_1
                            i_1 -= 1
                        while (i != 1)
                    
                    char* ecx_3 = data_3079208
                    
                    if (ecx_3 != 0)
                        ecx_3 = *(ecx_3 + 4)
                        
                        if (ecx_3 == 0x19)
                            int32_t var_20_3 = 0xffffffff
                            ecx_3 = sub_538a80(esi_1 - i_2 + 1)
                        else if (ecx_3 == 0x1b)
                            ecx_3 = sub_539d30(esi_1 - i_2 + 1)
                    
                    sub_536c00(ecx_3)
                    sub_56e600()
                    return sub_56e480()
    
    return result
}
