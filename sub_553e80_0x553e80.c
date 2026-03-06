// 函数名称: sub_553e80
// 虚拟地址: 0x553e80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_553e80(void* arg1, int32_t arg2, int32_t* arg3)
{
    // 第一条实际指令: if (arg2 s<= 0)
    if (arg2 s<= 0)
        return 
    
    arg1 += 1
    int32_t i
    
    do
        *arg3 = ((((zx.d(*(arg1 + 1)) + 0xff00) << 8) + zx.d(*arg1)) << 8) + zx.d(*(arg1 - 1))
        arg3 = &arg3[1]
        arg1 += 3
        i = arg2
        arg2 -= 1
    while (i != 1)
}
