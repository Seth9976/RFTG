// 函数名称: sub_564d50
// 虚拟地址: 0x564d50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_564d50(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t* ebx = arg2
    int32_t* ebx = arg2
    sub_567d40(ebx)
    int32_t* edi = arg1
    int32_t* i = *edi
    void* eax = *ebx
    
    if (i != 0)
        do
            int32_t* i_3 = i
            i = i[4]
            sub_568430(eax, i_3)
            ebx = arg2
        while (i != 0)
        
        edi = arg1
    
    void* var_c = &ebx[3]
    sub_567fd0(&ebx[3])
    void* ecx = ebx[3]
    int32_t* i_1 = edi[3]
    
    if (i_1 != 0)
        do
            int32_t* i_4 = i_1
            i_1 = i_1[2]
            sub_568510(ecx, i_4)
        while (i_1 != 0)
        
        edi = arg1
        ebx = arg2
    
    void* var_8_2 = &ebx[6]
    sub_568260(&ebx[6])
    void* edx = ebx[6]
    int32_t* i_2 = edi[6]
    
    if (i_2 != 0)
        do
            int32_t* i_5 = i_2
            i_2 = i_2[5]
            sub_5685e0(edx, i_5)
        while (i_2 != 0)
        
        edi = arg1
        ebx = arg2
    
    ebx[9] = edi[9]
    ebx[0xa] = edi[0xa]
    ebx[0xb] = edi[0xb]
    ebx[0xc] = edi[0xc]
    ebx[0xd] = edi[0xd]
    ebx[0xe] = edi[0xe]
    ebx[0xf] = edi[0xf]
    ebx[0x10] = edi[0x10]
    ebx[0x11] = edi[0x11]
    int32_t result = edi[0x12]
    ebx[0x12] = result
    ebx[0x13] = fconvert.s(fconvert.t(edi[0x13]))
    ebx[0x14] = edi[0x14]
    return result
}
