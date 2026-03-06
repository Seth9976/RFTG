// 函数名称: __fpmath
// 虚拟地址: 0x5abf9b
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t__fpmath(int32_t arg1)
{
    // 第一条实际指令: int32_t result = __cfltcvt_init()
    int32_t result = __cfltcvt_init()
    
    if (arg1 != 0)
        result = sub_5b8370()
    
    __fnclex()
    return result
}
