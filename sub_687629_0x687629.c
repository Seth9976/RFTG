// 函数名称: sub_687629
// 虚拟地址: 0x687629
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_687629(uint32_t arg1, int32_t* arg2 @ esi, int16_t arg3)
{
    // 第一条实际指令: if (((*(arg1 + 0xc) & 0x40) == 0 || *(arg1 + 8) != 0) && sub_68aa54(arg3, arg1).w == 0xffff)
    if (((*(arg1 + 0xc) & 0x40) == 0 || *(arg1 + 8) != 0) && sub_68aa54(arg3, arg1).w == 0xffff)
        *arg2 = 0xffffffff
        return 
    
    *arg2 += 1
}
