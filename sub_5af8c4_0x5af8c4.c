// 函数名称: sub_5af8c4
// 虚拟地址: 0x5af8c4
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_5af8c4(int32_t arg1, int32_t* arg2)
{
    // 第一条实际指令: if (arg1 == 0 || (arg2[3] & 0x1000) == 0)
    if (arg1 == 0 || (arg2[3] & 0x1000) == 0)
        return 
    
    sub_5a910e(arg2)
    arg2[3] &= 0xffffeeff
    arg2[6] = 0
    *arg2 = 0
    arg2[2] = 0
}
