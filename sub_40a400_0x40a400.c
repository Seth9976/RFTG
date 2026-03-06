// 函数名称: sub_40a400
// 虚拟地址: 0x40a400
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_tsub_40a400()
{
    // 第一条实际指令: int32_t var_c
    int32_t var_c
    
    if (sub_5a724b(&var_c) != 0)
        sub_4c5870("result == 0", &data_83f3d3, "..\code\GameApp.cpp", 0x692, "GoodRandSeed")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    sub_4096c0(sub_4c9580(var_c))
    sub_4fe060()
    sub_4078b0(&data_27e7a28)
    sub_4fc930()
    sub_4fd2c0(data_307bf94)
    sub_4fd2c0(data_307bf90)
    sub_4fd2c0(data_307bfa0)
    sub_4fd2c0(data_307bf98)
    sub_4fd2c0(data_307bfb8)
    sub_4fd2c0(data_307bfc0)
    sub_4fd2c0(data_307bfb4)
    sub_4fd2c0(data_307bfa8)
    sub_4fd2c0(data_307bfac)
    sub_4fd2c0(data_307bfa4)
    sub_4fd2c0(data_307bfb0)
    sub_4fd2c0(data_307bf9c)
    sub_409380()
    data_26a44e8 = &data_be2288
    sub_412000()
    int80_t result = sub_4748a0()
    sub_407730()
    sub_4b62e0()
    void* eax_3 = data_27e7fd0
    
    if (*(eax_3 + 0x2e) != 0 || *(eax_3 + 0x2a) != 0)
        sub_401d90()
    
    sub_4077f0()
    
    if (*(data_27e7fd0 + 0x2e) == 0)
        data_27c05f4 = 1
        sub_4075c0()
        
        if (*(data_27e7a40 + 0x18) == 0)
            sub_403080(0)
        
        *(data_27e7a40 + 0x20) = 0
        sub_4022e0()
        sub_407670()
        sub_40a050()
    else
        data_27c05f4 = 6
    
    CreateThread(nullptr, 0x100000, sub_40a3e0, nullptr, THREAD_CREATE_RUN_IMMEDIATELY, nullptr)
    sub_409c30()
    
    if (*(data_27e7fd0 + 0x27) != 0)
        sub_48b730()
    
    return result
}
