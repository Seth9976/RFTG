// 函数名称: sub_683c50
// 虚拟地址: 0x683c50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_683c50(int32_t arg1)
{
    // 第一条实际指令: int32_t* esi = arg1
    int32_t* esi = arg1
    void* edi = esi[0x73]
    esi[0x22] = *(edi + 0x10)
    int32_t eax_1 = esi[0x16]
    esi[0x21] = *(edi + 0x14)
    
    if (eax_1 == 0)
        if (esi[0x1e] != 3)
            *(edi + 4) = sub_683760
            return eax_1
        
        *(edi + 4) = sub_683800
        return eax_1
    
    int32_t eax_3 = eax_1 - 1
    
    if (eax_1 == 1)
        if (esi[0x1e] != 3)
            *(edi + 4) = sub_6838a0
        else
            *(edi + 4) = sub_683980
        
        *(edi + 0x30) = 0
        
        if (*(edi + 0x1c) == 0)
            eax_3 = sub_683520(esi)
        
        if (*(edi + 0x34) == 0)
            return sub_683670(esi)
    else
        if (eax_3 != 1)
            *(*esi + 0x14) = 0x30
            return (**esi)(esi)
        
        void* ebx_1 = edi + 0x44
        *(edi + 4) = sub_683a80
        *(edi + 0x54) = 0
        
        if (*ebx_1 == 0)
            sub_683c00(esi)
        
        int32_t i = 0
        eax_3 = esi[0x1c] * 2 + 4
        arg1 = eax_3
        
        if (esi[0x1e] s> 0)
            do
                eax_3 = sub_67d220(*ebx_1, arg1)
                i += 1
                ebx_1 += 4
            while (i s< esi[0x1e])
    
    return eax_3
}
