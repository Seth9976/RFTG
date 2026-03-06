// 函数名称: __cfltcvt_l
// 虚拟地址: 0x5b82c5
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t__cfltcvt_l(int32_t* arg1, char* arg2, void* arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t* arg7)
{
    // 第一条实际指令: if (arg4 == 0x65 || arg4 == 0x45)
    if (arg4 == 0x65 || arg4 == 0x45)
        return sub_5b7bb7(arg1, arg2, arg3, arg5, arg6.b, arg7)
    
    if (arg4 == 0x66)
        return sub_5b8117(arg1, arg2, arg3, arg5, arg7)
    
    if (arg4 != 0x61 && arg4 != 0x41)
        return sub_5b81d8(arg1, arg2, arg3, arg5, arg6.b, arg7)
    
    return sub_5b7c9e(arg1, arg2, arg3, arg5, arg6, arg7)
}
