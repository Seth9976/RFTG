// 函数名称: sub_67e870
// 虚拟地址: 0x67e870
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_67e870(void* arg1, void* arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    void* esi = arg1
    void* (** ebx)(void* arg1) = (**(esi + 4))(esi, 1, 0x74)
    *(esi + 0x1ac) = ebx
    *ebx = sub_67d990
    ebx[2] = sub_67e820
    ebx[0x1c] = 0
    
    if (arg2 == 0)
        int32_t eax_10 = (*(*(esi + 4) + 4))(esi, 1, 0x500)
        ebx[9] = eax_10 + 0x80
        ebx[0xa] = eax_10 + 0x100
        ebx[0xb] = eax_10 + 0x180
        ebx[0xc] = eax_10 + 0x200
        ebx[0xd] = eax_10 + 0x280
        ebx[0xe] = eax_10 + 0x300
        ebx[8] = eax_10
        ebx[0xf] = eax_10 + 0x380
        ebx[0x10] = eax_10 + 0x400
        ebx[0x11] = eax_10 + 0x480
        ebx[4] = 0
        ebx[1] = sub_67d2b0
        ebx[3] = sub_67d9f0
        return eax_10 + 0x480
    
    arg1 = nullptr
    
    if (*(esi + 0x24) s> 0)
        int32_t* edi_1 = *(esi + 0xd8) + 0xc
        arg2 = &ebx[0x12]
        void* i
        
        do
            int32_t eax_3 = *edi_1
            int32_t ecx_2 = eax_3
            
            if (*(esi + 0xdc) != 0)
                ecx_2 *= 3
            
            void* ebx_2 = *(esi + 4)
            int32_t eax_4 = sub_67d190(edi_1[5], eax_3)
            *arg2 = (*(ebx_2 + 0x14))(esi, 1, 1, sub_67d190(edi_1[4], edi_1[-1]), eax_4, ecx_2)
            i = arg1 + 1
            edi_1 = &edi_1[0x15]
            arg1 = i
            arg2 += 4
        while (i s< *(esi + 0x24))
    
    ebx[1] = sub_67dc40
    ebx[3] = sub_67de50
    ebx[4] = &ebx[0x12]
    return &ebx[0x12]
}
