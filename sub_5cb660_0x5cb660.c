// 函数名称: sub_5cb660
// 虚拟地址: 0x5cb660
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5cb660(int32_t* arg1)
{
    // 第一条实际指令: int32_t eax = data_bed820
    int32_t eax = data_bed820
    
    if (eax == 0)
        return sub_5c8d60() __tailcall
    
    if (arg1 == 0 || *arg1 != eax + 0xf4)
        sub_5cce60("Invalid window")
        return 0xffffffff
    
    sub_5cb1b0(arg1)
    
    if (sub_5d0ba0() == arg1)
        sub_5d1090(nullptr)
    
    if (sub_5d5520() == arg1)
        sub_5d5830(nullptr)
    
    if ((arg1[0xc].b & 2) != 0 && *(data_bed820 + 0x264) == arg1)
        sub_5cb370(arg1, 0)
    
    int32_t* eax_6 = arg1[0x19]
    
    if (eax_6 != 0)
        *eax_6 &= 0xfffffffb
        sub_5d65d0(arg1[0x19])
    
    void* ecx_3 = data_bed820
    int32_t eax_7 = *(ecx_3 + 0x70)
    
    if (eax_7 != 0)
        eax_7(ecx_3, arg1)
    
    void* ecx_4 = data_bed820
    int32_t eax_8 = *(ecx_4 + 0x64)
    
    if (eax_8 != 0)
        eax_8(ecx_4, arg1)
    
    if ((arg1[0xc].b & 2) != 0)
        sub_5ca340()
    
    void* eax_9 = sub_5c9500(arg1)
    
    if (*(eax_9 + 0x38) == arg1)
        *(eax_9 + 0x38) = 0
    
    int32_t __saved_edi_5 = arg1[2]
    *arg1 = 0
    sub_5d0af0()
    sub_5d65d0(arg1[3])
    int32_t var_14 = arg1[0x17]
    sub_5d0af0()
    
    while (arg1[0x1c] != 0)
        int32_t* edi_1 = arg1[0x1c]
        arg1[0x1c] = edi_1[2]
        int32_t var_10_5 = *edi_1
        sub_5d0af0()
        int32_t* var_14_1 = edi_1
        sub_5d0af0()
    
    void* eax_12 = arg1[0x1f]
    
    if (eax_12 != 0)
        *(eax_12 + 0x78) = arg1[0x1e]
    
    void* eax_13 = arg1[0x1e]
    
    if (eax_13 == 0)
        int32_t* __saved_edi_7 = arg1
        *(data_bed820 + 0xf0) = arg1[0x1f]
        return sub_5d0af0()
    
    int32_t* __saved_edi_6 = arg1
    *(eax_13 + 0x7c) = arg1[0x1f]
    return sub_5d0af0()
}
