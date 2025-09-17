//using system
//namespace dif diag ct scanapp
//clasprogram
//  private static void Main(string[] args)

//  var builder = WebApplication.CreateBuilder(args);

// builder.AddServiceDefaults();

// Add services to the container.
//  builder.Services.AddControllersWithViews();

// builder.Services.AddAuthentication(NegotiateDefaults.AuthenticationScheme)
//.AddNegotiate();

// builder.Services.AddAuthorization(options =>

// By default, all incoming requests will be authorized according to the default policy.
// options.FallbackPolicy = options.DefaultPolicy;

// builder.Services.AddRazorPages();
//  builder.Services.AddApplicationInsightsTelemetry();
//var app = builder.Build();
// configure the HTTP request pipline.
//if(!app.Environment.IsDevelopment())
//{app.UseExceptionHandler("/Home/Error");
//app.UseHsts();}
//app.UseHttpsRedirection();
//app.UseStaticFiles();
//app.UseRouting();
//app.UseAuthentication();
// Default MVC route app.MapControllerRoute(
//   name: "default",
//    pattern: "{controller=Home}/{action=Index}/{id?}");
//run app on port 7000
// Runamen app on (https://localhost:7000);
//app.Run();
using Microsoft.AspNetCore.Authentication.Negotiate;
