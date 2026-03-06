// 函数名称: sub_53dd40
// 虚拟地址: 0x53dd40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_53dd40()
{
    // 第一条实际指令: int32_t* result = data_3079208
    int32_t* result = data_3079208
    
    if (result != 0 && result[1] == 0x19)
        result = sub_466320(result)
        
        if (result != 0)
            result = SendMessageA(GetDlgItem(data_3078830, 0x76), 0x188, 0, 0)
            int32_t* result_1 = result
            
            if (result_1 != 0xffffffff)
                int32_t i_1 = sub_537960(result) + 1
                
                if (i_1 s> 0)
                    void* ecx_1 = (result_1 << 3) + &data_3078878
                    int32_t i
                    
                    do
                        char entry_ebx
                        *ecx_1 = entry_ebx
                        ecx_1 += 8
                        i = i_1
                        i_1 -= 1
                    while (i != 1)
                
                result = data_3079208
                
                if (result != 0)
                    result = result[1]
                    
                    if (result == 0x19)
                        int32_t var_8_2 = 0xffffffff
                        return sub_538a80(result_1)
                    
                    if (result == 0x1b)
                        return sub_539d30(result_1) __tailcall
    
    return result
}
