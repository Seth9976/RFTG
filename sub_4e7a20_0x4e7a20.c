// 函数名称: sub_4e7a20
// 虚拟地址: 0x4e7a20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4e7a20(int32_t* arg1)
{
    // 第一条实际指令: int32_t* ebx = arg1
    int32_t* ebx = arg1
    int32_t* edi = ebx[0x1a]
    
    if (edi != 0)
        int32_t esi_3 = ebx[0x1b] * 0x60
        sub_4f4430(edi, sub_4f4380(esi_3), esi_3)
        ebx[0x1a] = 0
    
    void* eax_3 = sub_4e7210(*ebx)
    ebx[0x1b] = *(eax_3 + 0x14)
    
    if (*(eax_3 + 0x14) s> 0)
        arg1[0x1a] = sub_4f43d0()
        ebx = arg1
    
    int32_t i = 0
    
    if (*(eax_3 + 0x14) s> 0)
        int32_t ecx_3 = 0
        
        do
            *(ecx_3 + ebx[0x1a] + 0x58) = 0xffffffff
            i += 1
            ecx_3 += 0x60
        while (i s< *(eax_3 + 0x14))
    
    return i
}
