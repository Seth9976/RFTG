// 函数名称: sub_53c720
// 虚拟地址: 0x53c720
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_53c720()
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    LRESULT eax_2 = SendMessageA(GetDlgItem(data_3078830, 0x76), 0x188, 0, 0)
    int32_t* result = data_3079208
    int32_t* result_1
    
    if (result == 0 || result[1] != 0x19)
        result_1 = nullptr
    else
        result = sub_466320(result)
        result_1 = result
    
    if (eax_2 == 0xffffffff || eax_2 == result_1[1] - 1)
        return result
    
    int32_t* result_2 = result_1
    int32_t* eax_4 = sub_4fff30(data_30d7434, 0)
    sub_505390(eax_4, eax_2, result_1, eax_4, eax_2 + 1)
    char* ecx_3 = sub_53c0a0(eax_2, eax_2 + 1)
    void* eax_6 = data_3079208
    
    if (eax_6 != 0)
        int32_t eax_7 = *(eax_6 + 4)
        
        if (eax_7 == 0x19)
            int32_t var_18_3 = 0xffffffff
            ecx_3 = sub_538a80(eax_2 + 1)
        else if (eax_7 == 0x1b)
            ecx_3 = sub_539d30(eax_2 + 1)
    
    sub_536c00(ecx_3)
    sub_56e600()
    return sub_56e480()
}
