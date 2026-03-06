// 函数名称: sub_5462d0
// 虚拟地址: 0x5462d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __thiscallsub_5462d0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: if (arg2 != 0)
    if (arg2 != 0)
        uint32_t eax_2 = zx.d(arg2.w)
        
        if (eax_2 u< *(arg1 + 0x4244))
            void* eax_4 = eax_2 * 0x14c + *(arg1 + 0x4240)
            int32_t ecx
            ecx.b = *(eax_4 + 0x148) != arg2
            void* result
            result.b = (eax_4 & (ecx - 1)) != 0
            return result
    
    int32_t eax_1
    eax_1.b = false
    return 0
}
