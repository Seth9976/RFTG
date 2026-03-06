// 函数名称: sub_670870
// 虚拟地址: 0x670870
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_670870(void* arg1, char* arg2, char* arg3)
{
    // 第一条实际指令: char* var_c
    char* var_c
    int32_t result = sub_670650(arg1, arg2, &var_c)
    int32_t result_1 = result
    
    if (result == 0)
        return result
    
    char* lpString = arg3
    int32_t edi_1
    
    if (lpString == 0 || *lpString == 0)
        edi_1 = 0
    else
        edi_1 = lstrlenA(lpString)
    
    sub_66f010(arg1, result + edi_1 + 1)
    int32_t ebx_3 = result_1 + 1
    
    if (arg1 != 0)
        char* eax_1 = var_c
        
        if (eax_1 != 0 && ebx_3 != 0)
            sub_666640(arg1, eax_1, ebx_3)
            sub_662280(arg1, var_c, ebx_3)
    
    if (edi_1 == 0)
    label_670914:
        
        if (arg1 != 0)
            int32_t eax_3 = *(arg1 + 0x124)
            result_1.b = (eax_3 u>> 0x18).b
            result_1:1.b = (eax_3 u>> 0x10).b
            *(arg1 + 0x2ac) = 0x82
            result_1:2.b = (eax_3 u>> 8).b
            result_1:3.b = eax_3.b
            sub_666640(arg1, &result_1, 4)
    else if (arg1 != 0)
        if (arg3 != 0 && edi_1 != 0)
            sub_666640(arg1, arg3, edi_1)
            sub_662280(arg1, arg3, edi_1)
        
        goto label_670914
    
    return sub_666530(arg1, var_c)
}
