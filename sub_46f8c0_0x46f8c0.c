// 函数名称: sub_46f8c0
// 虚拟地址: 0x46f8c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_46f8c0(int32_t arg1, int32_t arg2, void* arg3, int32_t* arg4, int32_t* arg5)
{
    // 第一条实际指令: int32_t eax = sx.d(*(arg3 + 0x1e6a))
    int32_t eax = sx.d(*(arg3 + 0x1e6a))
    int32_t eax_1 = eax - 1
    
    if (eax - 1 s>= 0)
        int32_t temp1_1
        
        do
            if (sx.d(*(arg3 + eax_1 + 0x1e84)) == arg2)
                int32_t eax_2 = sx.d(*(arg3 + (eax_1 << 1) + 0x1e90))
                *arg4 = sx.d(*(arg3 + (eax_1 << 1) + 0x1e6c))
                *arg5 = eax_2
                eax_2.b = 1
                return eax_2
            
            temp1_1 = eax_1
            eax_1 -= 1
        while (temp1_1 - 1 s>= 0)
    
    eax_1.b = 0
    return eax_1
}
