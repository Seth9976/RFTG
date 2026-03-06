// 函数名称: sub_66f1a0
// 虚拟地址: 0x66f1a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_66f1a0(void* arg1, char* arg2, char* arg3, void* arg4)
{
    // 第一条实际指令: (zx.d(*arg2) << 8 | zx.d(arg2[1])) << 8 | zx.d(arg2[2])
    (zx.d(*arg2) << 8 | zx.d(arg2[1])) << 8 | zx.d(arg2[2])
    
    if (arg1 == 0)
        return zx.d(arg2[3])
    
    if (arg4 u> 0xffffffff)
        sub_664320(arg1, "length exceeds PNG maxima")
        noreturn
    
    sub_66f010(arg1, arg4)
    
    if (arg3 != 0 && arg4 != 0)
        sub_666640(arg1, arg3, arg4)
        sub_662280(arg1, arg3, arg4)
    
    return sub_66f0f0(arg1)
}
