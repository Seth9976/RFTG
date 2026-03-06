// 函数名称: sub_65e460
// 虚拟地址: 0x65e460
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_65e460(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t ecx = *arg1
    int32_t ecx = *arg1
    
    if (ecx == 0)
        return 0xffffff7f
    
    int32_t eax = arg1[0xb1]
    
    if (eax != 0 && eax(ecx, arg2, arg3, 0) != 0xffffffff)
        arg1[2] = arg2
        arg1[3] = arg3
        sub_646250(&arg1[6])
        return 0
    
    return 0xffffff80
}
