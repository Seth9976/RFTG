// 函数名称: sub_416a30
// 虚拟地址: 0x416a30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_t __fastcallsub_416a30(void* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_69301c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_1c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_4169a0(arg1)
    int32_t* ebx = data_307c588
    sub_505790(arg1 + 0x234, 0x8495e8, 8)
    
    if ((data_31658e4 & 1) == 0)
        data_31658e4.d |= 1
        int32_t var_8_1 = 0
        data_31658e0 = sub_4f5220(ebx, "rgnMusicVol")
        int32_t var_8_2 = 0xffffffff
    
    int32_t eax_5 = 2
    
    if ((data_31658e4 & 2) == 0)
        data_31658e4.d |= 2
        int32_t var_8_3 = 1
        eax_5 = sub_4f5220(ebx, "rgnSoundVol")
        data_31658dc = eax_5
        int32_t var_8_4 = 0xffffffff
    
    sub_4167d0(eax_5, arg1 + 0x314, data_31658e0, arg1 + 0x14, ebx)
    sub_4167d0(arg1 + 0x124, arg1 + 0x318, data_31658dc, arg1 + 0x124, ebx)
    int32_t eax_7
    int80_t result
    result, eax_7 = sub_4f6f00(data_307c4d8)
    *(arg1 + 0x10) = eax_7
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
