// 函数名称: sub_4812a0
// 虚拟地址: 0x4812a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4812a0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_69078c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_edi
    int32_t var_34 = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if ((data_3165220 & 1) == 0)
        data_3165220.d |= 1
        int32_t var_c_1 = 0
        data_316521c = sub_4f5220(data_307c1c4, "btnFriend")
        int32_t var_c_2 = 0xffffffff
    
    if ((data_3165220 & 2) == 0)
        data_3165220.d |= 2
        int32_t var_c_3 = 1
        data_3165218 = sub_4f5220(data_307c1c4, "btnTrash")
        int32_t var_c_4 = 0xffffffff
    
    int32_t ebx = *(arg1 + 4) + data_307cd4c * 6
    
    if (arg2 == data_316521c)
        void* ecx_3 = data_27e7a40
        int32_t eax_9 = *(ecx_3 + 0x3188e4)
        
        if (ebx s<= eax_9)
            if (ebx == eax_9)
                data_30d6f3c = data_307c1b8
                fsbase->NtTib.ExceptionList = ExceptionList
                return 0
            
            int32_t esi_1 = data_307cd48
            int32_t edi = *(ecx_3 + ebx * 0x3c + 0x317ad4)
            int32_t eax_15 = sub_40c7a0(&data_307cd0c)
            int32_t edx_2 = data_307c16c
            *(eax_15 + esi_1 * 0xc + 0x50) = 3
            *(eax_15 + esi_1 * 0xc + 0x58) = edi
            data_30d6f38 = edx_2
            fsbase->NtTib.ExceptionList = ExceptionList
            return 0
        
        sub_4c5870("friendIndex <= gCClient->numFriends", &data_83f3d3, "..\code\RftGVR.cpp", 0x11b3, 
            "VRFriendsTableClick")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (arg2 == data_3165218)
        uint32_t eax_18 = data_27e7a40
        
        if (ebx s> *(eax_18 + 0x3188e4))
            sub_4c5870("friendIndex <= gCClient->numFriends", &data_83f3d3, "..\code\RftGVR.cpp", 
                0x11c6, "VRFriendsTableClick")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t esi_6 = ebx * 0x3c
        int32_t var_20 = *(esi_6 + eax_18 + 0x317ad4)
        int32_t var_1c_1 = 1
        sub_4c75d0(eax_18, &var_20, *(eax_18 + 0x28), 8, 0xf4269, &var_20)
        void* ecx_11 = data_27e7a40
        sub_5a6c10(esi_6 + ecx_11 + 0x317ad4, esi_6 + ecx_11 + 0x317b10, 
            (*(ecx_11 + 0x3188e4) - ebx - 1) * 0x3c)
        void* eax_24 = data_27e7a40
        *(eax_24 + 0x3188e4) -= 1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0
}
