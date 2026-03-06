// 函数名称: sub_5bb884
// 虚拟地址: 0x5bb884
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5bb884(char* arg1 @ edi, char* arg2)
{
    // 第一条实际指令: int32_t* esi = data_bec598
    int32_t* esi = data_bec598
    
    while (true)
        char* eax_3 = *esi
        
        if (eax_3 == 0)
            break
        
        if (__mbsncoll(arg2, eax_3, arg1) == 0)
            int32_t eax_2
            eax_2.b = arg1[*esi]
            
            if (eax_2.b == 0x3d || eax_2.b == 0)
                return (esi - data_bec598) s>> 2
        
        esi = &esi[1]
    
    return neg.d((esi - data_bec598) s>> 2)
}
