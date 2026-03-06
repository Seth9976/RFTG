// 函数名称: sub_468900
// 虚拟地址: 0x468900
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_468900(void* arg1 @ esi, int128_t* arg2)
{
    // 第一条实际指令: __chkstk(0x4e30)
    __chkstk(0x4e30)
    int32_t __saved_ebp
    int32_t var_8 = __security_cookie ^ &__saved_ebp
    void* var_4e34
    
    if (var_4e34 + arg1 s< 0x4e20)
        sub_5ab990(&__saved_ebp + var_4e34 - 0x4e28, arg2, arg1)
        sub_5a6aba(arg1 ^ &__saved_ebp)
        return var_4e34 + arg1
    
    sub_4c5870("gamePlayer.logLengthBytesCurrent + logLengthBytes < 20000", &data_83f3d3, 
        "..\code\RFTGServer.cpp", 0x9f, "PlayerLogAppend")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
