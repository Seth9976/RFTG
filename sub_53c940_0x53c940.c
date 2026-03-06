// 函数名称: sub_53c940
// 虚拟地址: 0x53c940
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_53c940()
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    LRESULT eax_2 = SendMessageA(GetDlgItem(data_3078830, 0x7b), 0x188, 0, 0)
    int32_t* result = sub_536db0()
    
    if (eax_2 != 0xffffffff)
        int32_t ecx_2 = *result - 1
        
        if (eax_2 != ecx_2)
            int32_t var_1c_1 = ecx_2
            int32_t* eax_5 = sub_4fff30(data_315f704, 4)
            char* ecx_4 = sub_505390(eax_5, eax_2, result, eax_5, eax_2 + 1)
            void* eax_6 = data_3079208
            
            if (eax_6 != 0)
                int32_t eax_7 = *(eax_6 + 4)
                
                if (eax_7 == 0x19)
                    int32_t var_18_2 = eax_2 + 1
                    return sub_536c00(sub_538a80(0xffffffff))
                
                if (eax_7 == 0x1b)
                    ecx_4 = sub_539d30(0xffffffff)
            
            return sub_536c00(ecx_4)
    
    return result
}
