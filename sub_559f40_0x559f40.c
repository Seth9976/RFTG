// 函数名称: sub_559f40
// 虚拟地址: 0x559f40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __thiscallsub_559f40(void* arg1, int32_t arg2)
{
    // 第一条实际指令: if (arg2 != 0)
    if (arg2 != 0)
        uint32_t eax_1 = zx.d(arg2.w)
        
        if (eax_1 u< *(arg1 + 0x88))
            int32_t* eax_3 = (eax_1 << 4) + *(arg1 + 0x84)
            
            if (eax_3[3] == arg2)
                return *eax_3
    
    return 0
}
