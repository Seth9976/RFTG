// 函数名称: sub_646480
// 虚拟地址: 0x646480
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_646480(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        return 0xffffffff
    
    sub_5abfc0(arg1, 0, 0x168)
    arg1[1] = 0x4000
    arg1[6] = 0x400
    int32_t eax = sub_5a881a(0x4000)
    *arg1 = eax
    int32_t eax_1 = sub_5a881a(0x1000)
    arg1[4] = eax_1
    int32_t eax_2 = sub_5a881a(0x2000)
    arg1[5] = eax_2
    
    if (eax != 0 && eax_1 != 0 && eax_2 != 0)
        arg1[0x54] = arg2
        return 0
    
    sub_645620(arg1)
    return 0xffffffff
}
