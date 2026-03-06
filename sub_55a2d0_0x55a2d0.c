// 函数名称: sub_55a2d0
// 虚拟地址: 0x55a2d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __thiscallsub_55a2d0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: if (arg2 != 0)
    if (arg2 != 0)
        uint32_t eax_2 = zx.d(arg2.w)
        
        if (eax_2 u< *(arg1 + 0x88))
            void* eax_4 = (eax_2 << 4) + *(arg1 + 0x84)
            int32_t ecx
            ecx.b = *(eax_4 + 0xc) != arg2
            void* result
            result.b = (eax_4 & (ecx - 1)) != 0
            return result
    
    int32_t eax_1
    eax_1.b = false
    return 0
}
