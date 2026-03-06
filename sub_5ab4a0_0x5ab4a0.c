// 函数名称: sub_5ab4a0
// 虚拟地址: 0x5ab4a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_t __stdcallsub_5ab4a0(int32_t arg1, EXCEPTION_RECORD* arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t var_c = ecx
    int32_t edi
    int32_t var_18 = edi
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    RtlUnwind(arg1, 0x5ab4cb, arg2, nullptr)
    uint32_t result = arg2->ExceptionFlags & 0xfffffffd
    arg2->ExceptionFlags = result
    ExceptionList->Next = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
