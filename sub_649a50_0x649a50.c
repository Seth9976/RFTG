// 函数名称: sub_649a50
// 虚拟地址: 0x649a50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_649a50(int32_t* arg1, int128_t* arg2)
{
    // 第一条实际指令: int32_t i = 0
    int32_t i = 0
    int32_t ecx
    int32_t edx
    ecx, edx = sub_5abfc0(arg2, 0, 0x70)
    arg2[4].d = arg1
    *(arg2 + 0x4c) = 0
    *(arg2 + 0x44) = 0
    
    if (*arg1 != 0)
        char* eax_1
        int32_t ecx_1
        int32_t edx_1
        eax_1, ecx_1, edx_1 = _calloc(arg1, edx, ecx, 1, 0x48)
        char* edi_1 = eax_1
        *(arg2 + 0x68) = edi_1
        *(edi_1 + 4) = fconvert.s(fconvert.t(-9999f))
        
        do
            if (i != 7)
                *(edi_1 + (i << 2) + 0xc) = _calloc(eax_1, edx_1, ecx_1, 1, 0x14)
            else
                *(edi_1 + 0x28) = arg2 + 4
            
            eax_1, ecx_1, edx_1 = sub_68ae90(*(edi_1 + (i << 2) + 0xc))
            i += 1
        while (i s< 0xf)
    
    return 0
}
