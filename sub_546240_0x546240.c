// 函数名称: sub_546240
// 虚拟地址: 0x546240
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __thiscallsub_546240(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ecx = arg2
    int32_t ecx = arg2
    
    if (ecx == 0)
        return 
    
    uint32_t eax = zx.d(ecx.w)
    
    if (eax u>= *(arg1 + 0x4244))
        return 
    
    eax = eax * 0x14c + *(arg1 + 0x4240)
    
    if (*(eax + 0x148) != ecx)
        return 
    
    arg2 = *eax
    data_3079448(1, &arg2)
    int32_t eax_3 = *(eax + 0xd8)
    
    if (eax_3 != 0)
        _aligned_free_base(eax_3)
        *(eax + 0xd8) = 0
    
    int32_t eax_4 = *(arg1 + 0x424c)
    *(arg1 + 0x424c) = zx.d(*(eax + 0x148))
    *(eax + 0x148) = eax_4
    *(arg1 + 0x4250) -= 1
    sub_545f10(0)
}
