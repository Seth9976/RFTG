// 函数名称: sub_5a09d0
// 虚拟地址: 0x5a09d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_5a09d0(void* arg1, uint32_t* arg2, uint32_t* arg3, int32_t* arg4)
{
    // 第一条实际指令: uint32_t eax = sub_5959c0(arg1)
    uint32_t eax = sub_5959c0(arg1)
    
    if (sub_5959c0(arg1) + (eax << 0x10) == 0x38425053)
        if (sub_5959c0(arg1) != 1)
            *(arg1 + 0xa8) = *(arg1 + 0xb0)
            return 0
        
        int32_t eax_8
        int32_t ecx_2
        
        if (*(arg1 + 0x10) != 0)
            ecx_2 = *(arg1 + 0xac)
            eax_8 = ecx_2 - *(arg1 + 0xa8)
        
        if (*(arg1 + 0x10) == 0 || eax_8 s>= 6)
            *(arg1 + 0xa8) += 6
        else
            int32_t eax_9 = *(arg1 + 0x1c)
            *(arg1 + 0xa8) = ecx_2
            (*(arg1 + 0x14))(eax_9, 6 - eax_8)
        
        uint32_t eax_10 = sub_5959c0(arg1)
        uint32_t eax_17
        
        if (eax_10 u<= 0x10)
            uint32_t eax_11 = sub_5959c0(arg1)
            *arg3 = sub_5959c0(arg1) + (eax_11 << 0x10)
            uint32_t eax_14 = sub_5959c0(arg1)
            *arg2 = sub_5959c0(arg1) + (eax_14 << 0x10)
            eax_17 = sub_5959c0(arg1)
        
        if (eax_10 u> 0x10 || eax_17 != 8)
            *(arg1 + 0xa8) = *(arg1 + 0xb0)
            return 0
        
        if (sub_5959c0(arg1) == 3)
            *arg4 = 4
            return 1
    
    *(arg1 + 0xa8) = *(arg1 + 0xb0)
    return 0
}
