// 函数名称: sub_4b7890
// 虚拟地址: 0x4b7890
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_4b7890(int32_t* arg1)
{
    // 第一条实际指令: int32_t* eax = data_27e7a44
    int32_t* eax = data_27e7a44
    void* ebx = *eax
    void* edi = nullptr
    void* esi_2 = eax[1] * 0x1f8 + ebx
    
    while (true)
        void* eax_1 = ebx
        
        if (edi != 0)
            eax_1 = edi + 0x1f8
        
        if (eax_1 u>= esi_2)
            break
        
        while (true)
            if ((*(eax_1 + 0x1f0) & 0xffff0000) != 0)
                edi = eax_1
                
                if (*eax_1 != 0)
                    break
                
                int32_t ecx_2 = 0
                void* edx_2 = eax_1 + 0x2c
                
                while (*edx_2 != 0)
                    ecx_2 += 1
                    edx_2 += 0x70
                    
                    if (ecx_2 s>= 4)
                        ecx_2 = 0xffffffff
                        break
                
                *arg1 = ecx_2
                
                if (ecx_2 == 0xffffffff)
                    break
                
                return eax_1
            
            eax_1 += 0x1f8
            
            if (eax_1 u>= esi_2)
                goto label_4b78d5
    
    label_4b78d5:
    int128_t* eax_2 = sub_4b9030()
    int32_t eax_3 = data_bec228
    eax_2[2].d = eax_3
    data_bec228 = eax_3 + 1
    *eax_2 = 0
    *arg1 = 0
    sub_4b9e80(eax_2 + 0x18)
    sub_4d0920(*(eax_2 + 0x1e8))
    return eax_2
}
