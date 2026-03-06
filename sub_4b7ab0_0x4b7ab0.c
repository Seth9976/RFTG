// 函数名称: sub_4b7ab0
// 虚拟地址: 0x4b7ab0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_4b7ab0(int32_t arg1 @ edi)
{
    // 第一条实际指令: int32_t* ecx_4 = data_27e7a44
    int32_t* ecx_4 = data_27e7a44
    void* edx = *ecx_4
    void* eax = nullptr
    void* ecx_2 = ecx_4[1] * 0x1f8 + edx
    
    while (true)
        if (eax != 0)
            eax += 0x1f8
        else
            eax = edx
        
        if (eax u>= ecx_2)
            break
        
        while (true)
            if ((*(eax + 0x1f0) & 0xffff0000) != 0)
                if (*eax != 1)
                    break
                
                if (*(eax + 4) != arg1)
                    break
                
                return eax
            
            eax += 0x1f8
            
            if (eax u>= ecx_2)
                goto label_4b7af2
    
    label_4b7af2:
    int128_t* eax_1 = sub_4b9030()
    int32_t eax_2 = data_bec228
    eax_1[2].d = eax_2
    data_bec228 = eax_2 + 1
    *eax_1 = 1
    *(eax_1 + 4) = arg1
    sub_4b9e80(eax_1 + 0x18)
    sub_4d0920(*(eax_1 + 0x1e8))
    return eax_1
}
