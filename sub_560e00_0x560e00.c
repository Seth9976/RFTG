// 函数名称: sub_560e00
// 虚拟地址: 0x560e00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __thiscallsub_560e00(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* var_8 = arg1
    void* var_8 = arg1
    
    if (arg2 == 0)
        return 
    
    uint32_t eax = zx.d(arg2.w)
    
    if (eax u>= *(arg1 + 0x44))
        return 
    
    uint32_t edi_1 = eax * 0x24c + *(arg1 + 0x40)
    
    if (*(edi_1 + 0x248) != arg2)
        return 
    
    int32_t* eax_2 = *(edi_1 + 0x200)
    
    if (eax_2 != 0)
        (*(*eax_2 + 8))(eax_2)
    
    int32_t* eax_3 = *(edi_1 + 0x1fc)
    
    if (eax_3 != 0)
        (*(*eax_3 + 8))(eax_3)
    
    int32_t* eax_4 = *(edi_1 + 0x1f4)
    
    if (eax_4 != 0)
        (*(*eax_4 + 8))(eax_4)
    
    int32_t* eax_5 = *(edi_1 + 0x1f8)
    
    if (eax_5 != 0)
        (*(*eax_5 + 8))(eax_5)
    
    int32_t* esi_1 = edi_1 + 0x34
    int32_t i_1 = 8
    int32_t i
    
    do
        if (*esi_1 != 0)
            int32_t* eax_6 = *esi_1
            (*(*eax_6 + 8))(eax_6)
        
        esi_1 = &esi_1[1]
        i = i_1
        i_1 -= 1
    while (i != 1)
    eax = *(arg1 + 0x4c)
    *(arg1 + 0x4c) = zx.d(*(edi_1 + 0x248))
    *(edi_1 + 0x248) = eax
    *(arg1 + 0x50) -= 1
}
