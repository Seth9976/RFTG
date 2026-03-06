// 函数名称: sub_4c7510
// 虚拟地址: 0x4c7510
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t* __convention("regparm")sub_4c7510(int32_t arg1, int32_t** arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    
    if (arg3 s< 0x3e8)
        sub_4c5870("messageId >= NETMSG_MIN_VALUE", &data_83f3d3, "Network.cpp", 0x29e, 
            "NetBufferStartMessage")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (arg2 s<= 0xfd0)
        int32_t var_c = arg3
        int32_t var_14
        int32_t* var_1c = &var_14
        void* ecx
        void* var_20 = ecx
        int32_t** var_10 = arg2
        var_14 = 0xfeedface
        int128_t* result = sub_4c72b0(0xc, arg2, ecx)
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return result
    
    sub_4c5870("length <= MAX_NET_MESSAGE_SIZE", &data_83f3d3, "Network.cpp", 0x29f, 
        "NetBufferStartMessage")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
