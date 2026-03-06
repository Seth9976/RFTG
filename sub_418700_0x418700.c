// 函数名称: sub_418700
// 虚拟地址: 0x418700
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_418700(int32_t arg1 @ edi)
{
    // 第一条实际指令: void* eax = nullptr
    void* eax = nullptr
    int32_t* esi_1 = *(data_27e7a40 + 0x548) + 0x43960
    int32_t entry_ebx
    
    while (true)
        if (eax != 0)
            eax += 0xb0
        else
            eax = *esi_1
        
        int32_t ecx_2 = esi_1[1] * 0xb0 + *esi_1
        
        if (eax u>= ecx_2)
            break
        
        while (true)
            if ((*(eax + 0xac) & 0xffff0000) != 0)
                if (*eax != 6)
                    break
                
                if (*(eax + 0x8c) != entry_ebx)
                    break
                
                if (*(eax + 0x90) != arg1)
                    break
                
                return eax
            
            eax += 0xb0
            
            if (eax u>= ecx_2)
                goto label_418751
    
    label_418751:
    int128_t* eax_1 = sub_463e80(esi_1)
    *eax_1 = 6
    *(eax_1 + 0x8c) = entry_ebx
    eax_1[9].d = arg1
    return eax_1
}
