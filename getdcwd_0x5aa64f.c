// 函数名称: __getdcwd
// 虚拟地址: 0x5aa64f
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char* __convention("regparm")__getdcwd(int32_t arg1, int32_t arg2, PSTR arg3, char* arg4, uint32_t arg5)
{
    // 第一条实际指令: PSTR var_8 = arg3
    PSTR var_8 = arg3
    PSTR filePart = arg3
    int32_t fileName
    int32_t fileName_1 = fileName
    
    if (fileName_1 == 0)
        fileName_1 = sub_5b55de()
    else if (sub_5aa5f5(fileName_1) == 0)
        *___doserrno() = 0xf
        *__errno() = 0xd
        __invalid_parameter_noinfo()
        return nullptr
    
    int32_t edi
    int32_t var_14_2 = edi
    char* result
    uint32_t nBufferLength
    
    if (arg4 == 0)
        nBufferLength = 0
    label_5aa6c6:
        
        if (fileName_1 == 0)
            fileName.w = 0x2e
        else
            fileName_1.b += 0x40
            fileName.b = fileName_1.b
            fileName:1.w = 0x2e3a
            fileName:3.b = 0
        
        uint32_t eax_6
        int32_t ecx_1
        int32_t edx
        eax_6, ecx_1, edx = GetFullPathNameA(&fileName, nBufferLength, arg4, &filePart)
        
        if (eax_6 == 0)
            ___acrt_errno_map_os_error(GetLastError())
            result = nullptr
        else if (arg4 == 0)
            if (eax_6 s> arg5)
                arg5 = eax_6
            
            char* lpBuffer = _calloc(eax_6, edx, ecx_1, arg5, 1)
            
            if (lpBuffer != 0)
                uint32_t eax_11 = GetFullPathNameA(&fileName, arg5, lpBuffer, &filePart)
                
                if (eax_11 == 0 || eax_11 s>= arg5)
                    ___acrt_errno_map_os_error(GetLastError())
                    result = nullptr
                else
                    result = lpBuffer
            else
                *__errno() = 0xc
                *___doserrno() = 8
                result = nullptr
        else if (eax_6 s< nBufferLength)
            result = arg4
        else
            *__errno() = 0x22
            *arg4 = 0
            result = nullptr
    else
        if (arg5 s> 0)
            nBufferLength = arg5
            *arg4 = 0
            goto label_5aa6c6
        
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        result = nullptr
    return result
}
