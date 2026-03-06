// 函数名称: sub_55dc30
// 虚拟地址: 0x55dc30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __thiscallsub_55dc30(void* arg1, int32_t arg2)
{
    // 第一条实际指令: if (arg2 != 0)
    if (arg2 != 0)
        uint32_t eax_1 = zx.d(arg2.w)
        
        if (eax_1 u< *(arg1 + 0x44))
            void* eax_3 = eax_1 * 0x24c + *(arg1 + 0x40)
            
            if (*(eax_3 + 0x248) == arg2)
                return *(eax_3 + 0x18)
    
    return 0
}
