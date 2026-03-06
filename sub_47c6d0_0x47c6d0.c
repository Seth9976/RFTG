// 函数名称: sub_47c6d0
// 虚拟地址: 0x47c6d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD**sub_47c6d0()
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_698eae
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_edi
    int32_t eax_2 = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if ((data_3166874 & 1) == 0)
        data_3166874.d |= 1
        int32_t var_c_1 = 0
        char const* const var_30_1 = "players"
        char* edx
        data_3166870 = sub_510710(data_307ca3c, edx)
        int32_t var_c_2 = 0xffffffff
    
    data_3092a04
    int32_t eax_5
    int32_t ecx_1
    int32_t edx_2
    eax_5, ecx_1, edx_2 = sub_50eb00(data_3166870, 0)
    sub_407670()
    int32_t ecx_2
    int32_t edx_3
    ecx_2, edx_3 = sub_41a2c0(0, edx_2, ecx_1, 1)
    sub_4075c0()
    
    if (data_27c06d8 == 2)
        int32_t var_20 = 0
        int32_t var_1c = 1
        sub_42dd70(&var_20, edx_3, ecx_2, &var_20, 0, 0, eax_2)
        sub_40a160("single-player-resume")
        struct _EXCEPTION_REGISTRATION_RECORD** result =
            Concurrency::details::_StructuredTaskCollection::~_StructuredTaskCollection("
            resume-single-player")
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
    
    sub_4c5870("setup.status == GAMESTATUS_PLAYING", &data_83f3d3, "..\code\RftGVR.cpp", 0xca0, 
        "VRSinglePlayerResume")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
