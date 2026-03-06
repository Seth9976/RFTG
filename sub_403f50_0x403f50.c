// 函数名称: sub_403f50
// 虚拟地址: 0x403f50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __fastcallsub_403f50(void* arg1)
{
    // 第一条实际指令: char const* const var_14
    char const* const var_14
    int32_t var_8
    
    if (*(arg1 + 8) == 8)
        if (*(arg1 + 0xc) == 1)
            void* result = data_27e7a40
            *(result + 0x1a) = 1
            *(result + 0x1c) = *(arg1 + 0x10)
            return result
        
        char const* const var_4_1 = "ClientGotSimpleMessage"
        var_8 = 0x59d
        char const* const var_c_1 = "..\code\CClient.cpp"
        char* const var_10_1 = &data_83f3d3
        var_14 = "Halt"
    else
        char const* const var_4 = "ClientGotSimpleMessage"
        var_8 = 0x593
        char const* const var_c = "..\code\CClient.cpp"
        char* const var_10 = &data_83f3d3
        var_14 = "message.dataLen == sizeof(CardsSimpleMessage)"
    
    sub_4c5870(var_14, &data_83f3d3, "..\code\CClient.cpp", var_8, "ClientGotSimpleMessage")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_4c5a30() __tailcall
    
    breakpoint
}
